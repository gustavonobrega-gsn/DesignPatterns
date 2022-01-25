from AbstractFactory import *
from ConcreteProductB import *

class ConcreteFactoryB(AbstractFactory):

	def factory_method(self):
		return ConcreteProductB()