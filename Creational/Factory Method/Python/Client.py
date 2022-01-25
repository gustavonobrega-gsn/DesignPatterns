from ConcreteFactoryA import *
from ConcreteFactoryB import *

if __name__ == '__main__':
	
	abstract_factory = ConcreteFactoryA()
	abstract_factory.operation()
	
	abstract_factory = ConcreteFactoryB()
	abstract_factory.operation()