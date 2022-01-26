from abc import ABC, abstractmethod

class AbstractFactory(ABC):

	@abstractmethod
	def create_productA(self):
		pass
		
	@abstractmethod
	def create_productB(self):
		pass
		
	@abstractmethod
	def create_productC(self):
		pass