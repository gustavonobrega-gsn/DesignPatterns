from AbstractProduct import *

class AbstractFactory(ABC):
	
	@abstractmethod
	def factory_method(self):
		pass
		
	def operation(self):
		abstract_product = self.factory_method()
		abstract_product.operation()