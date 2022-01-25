from abc import ABC, abstractmethod

class AbstractProduct(ABC):

	@abstractmethod
	def operation(self):
		pass