from AbstractFactory import *
from ConcreteProductA_1 import *
from ConcreteProductB_1 import *
from ConcreteProductC_1 import *

class ConcreteFactory1(AbstractFactory):
	
	def create_productA(self):
		return ConcreteProductA_1()
		
	def create_productB(self):
		return ConcreteProductB_1()
		
	def create_productC(self):
		return ConcreteProductC_1()