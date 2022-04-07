package main

type AbstractFactory interface {
	CreateProductA() AbstractProductA
	CreateProductB() AbstractProductB
	CreateProductC() AbstractProductC
}
