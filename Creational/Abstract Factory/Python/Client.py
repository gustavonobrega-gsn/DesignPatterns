from ConcreteFactory1 import *
from ConcreteFactory2 import *

if __name__ == '__main__':
	
	abstract_factory = ConcreteFactory1()
	
	abstract_productA = abstract_factory.create_productA()
	abstract_productB = abstract_factory.create_productB()
	abstract_productC = abstract_factory.create_productC()
	
	abstract_productA.operationA()
	abstract_productB.operationB()
	abstract_productC.operationC()
	
	
	abstract_factory = ConcreteFactory2()
	
	abstract_productA = abstract_factory.create_productA()
	abstract_productB = abstract_factory.create_productB()
	abstract_productC = abstract_factory.create_productC()
	
	abstract_productA.operationA()
	abstract_productB.operationB()
	abstract_productC.operationC()