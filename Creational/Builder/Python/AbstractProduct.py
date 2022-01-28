from abc import ABC, abstractmethod

class AbstractProduct(ABC):

	def __init__(self):
		self.string_set = {}
		self.string_set = set()

	def operation(self):
		print(self.string_set)
		
	@abstractmethod
	def step_a_1(self):
		pass
		
	@abstractmethod
	def step_a_2(self):
		pass
		
	@abstractmethod
	def step_b_1(self):
		pass
		
	@abstractmethod
	def step_b_2(self):
		pass
		
	@abstractmethod
	def step_c_1(self):
		pass
		
	@abstractmethod
	def step_c_2(self):
		pass