#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
  
class particle_filter(Node):
	def __init__(self):
		super().__init__("particle_filter") 
		self.get_logger().info("Particle Filter Node has been started")


		
	# 	self.scan_subscriber = self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)
	# 	# self.odom_publisher = self.create_publisher(Odometry, 'odom', 10)

	# def scan_callback(self, msg):
	# 	# msg = LaserScan()
	# 	self.get_logger().info(str(max(msg.ranges)))
  
def main(args=None):
	rclpy.init(args=args)
	node = particle_filter()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == '__main__':
	main()