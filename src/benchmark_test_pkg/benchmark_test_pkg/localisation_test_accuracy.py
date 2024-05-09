#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry  
import csv
class localisation_test_accuracy(Node):
	def __init__(self):
		super().__init__("localisation_test_accuracy") 
		self.trueOdom_subscriber_ = self.create_subscription(Odometry, "/ego_racecar/odom", self.trueOdomCallback, 1)
		self.pfOdom_subscriber_ = self.create_subscription(Odometry, "/pf/pose/odom", self.pfOdomCallback, 1)

		self.truePosition = Odometry()
		self.pfPosition = Odometry()


		self.timer = self.create_timer(1.0, self.saveToFile)
		self.trueX = [0]
		self.pfX = [0]
		self.trueY = [0]
		self.pfY = [0]

	def trueOdomCallback(self, msg: Odometry):
		# self.get_logger().info('Received true odom: x: ' + str(msg.pose.pose.position.x) + ', y: ' + str(msg.pose.pose.position.y) + ', z: ' + str(msg.pose.pose.position.z))
		self.truePosition = msg
		self.trueX.append(msg.pose.pose.position.x)
		self.trueY.append(msg.pose.pose.position.y)

	def pfOdomCallback(self, msg: Odometry):
		# self.get_logger().info('Received pf odom: x: ' + str(msg.pose.pose.position.x) + ', y: ' + str(msg.pose.pose.position.y) + ', z: ' + str(msg.pose.pose.position.z))
		self.pfPosition = msg
		self.pfX.append(msg.pose.pose.position.x)
		self.pfY.append(msg.pose.pose.position.y)

	def saveToFile(self):
		with open('/home/chris/Desktop/localisation_test_accuracy.csv', 'a', newline=';') as file:
			writer = csv.writer(file)
			# writer.writerow([self.truePosition.pose.pose.position.x, self.pfPosition.pose.pose.position.x, self.truePosition.pose.pose.position.y, self.pfPosition.pose.pose.position.y])
			writer.writerow([self.trueX[-1], self.pfX[-1], self.trueY[-1], self.pfY[-1]])
		
  
def main(args=None):
	rclpy.init(args=args)
	node = localisation_test_accuracy()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == '__main__':
	main()