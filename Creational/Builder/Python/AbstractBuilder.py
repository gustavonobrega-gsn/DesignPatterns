from abc import ABC, abstractmethod

class AbstractBuilder(ABC):

	def get_product(self):
		return self.product
		
	@abstractmethod
	def reset(self):
		pass
		
	@abstractmethod
	def build_step_a(self):
		pass
		
	@abstractmethod
	def build_step_b(self):
		pass
		
	@abstractmethod
	def build_step_c(self):
		pass