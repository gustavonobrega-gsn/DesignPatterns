from AbstractFactory import *
from ConcreteProductA import *

class ConcreteFactoryA(AbstractFactory):

	def factory_method(self):
		return ConcreteProductA()