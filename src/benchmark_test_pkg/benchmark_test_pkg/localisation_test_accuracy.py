#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import na
  
class localisation_test_accuracy(Node):
	def __init__(self):
		super().__init__("localisation_test_accuracy")  
  
def main(args=None):
	rclpy.init(args=args)
	node = localisation_test_accuracy()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == '__main__':
	main()