from AbstractProduct import *

class ConcreteProduct1(AbstractProduct):

	def step_a_1(self):
		self.string_set.add("step_a_1")
		
	def step_a_2(self):
		pass
	
	def step_b_1(self):
		self.string_set.add("step_b_1")
	
	def step_b_2(self):
		pass
	
	def step_c_1(self):
		self.string_set.add("step_c_1")
	
	def step_c_2(self):
		pass