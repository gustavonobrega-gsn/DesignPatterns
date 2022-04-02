package main

type AbstractFactory interface {
	factoryMethod() AbstractProduct
	operation()
}
