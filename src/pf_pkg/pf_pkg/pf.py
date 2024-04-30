#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import numpy as np


# Interface
from sensor_msgs.msg import LaserScan

  
class pf(Node):
	def __init__(self):
		super().__init__("pf")
		self.scan_subscriber = self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)

	def scan_callback(self, msg):
		# self.get_logger().info(str(max(msg.ranges)))
		self.scan = msg.ranges
		self.number_of_particles = len(self.scan)

	def initial_pose(self):





# Main
def main(args=None):
	rclpy.init(args=args)
	node = pf()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == '__main__':
	main()