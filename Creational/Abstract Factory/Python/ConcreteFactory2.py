from AbstractFactory import *
from ConcreteProductA_2 import *
from ConcreteProductB_2 import *
from ConcreteProductC_2 import *

class ConcreteFactory2(AbstractFactory):
	
	def create_productA(self):
		return ConcreteProductA_2()
		
	def create_productB(self):
		return ConcreteProductB_2()
		
	def create_productC(self):
		return ConcreteProductC_2()