#include "../inc/ProductProvider.hpp"

#include <iostream>

ProductProvider::ProductProvider()
{
    for(int i = 0 ; i < m_max_products ; i++)
    {
        m_product_pool.push_back(new Product());

        std::cout << "Product created on address: " << m_product_pool[i] << std::endl;
    }
    std::cout << std::endl;
}

ProductProvider::~ProductProvider()
{
    while(!m_product_pool.empty())
    {
    	std::cout << "deleting " << *(m_product_pool.begin()) << std::endl;

        delete *(m_product_pool.begin());
        m_product_pool.erase(m_product_pool.begin());
    }
}

Product* ProductProvider::get_product()
{
    if(!m_product_pool.empty())
    {
        Product* product = *(m_product_pool.begin());
        m_product_pool.erase(m_product_pool.begin());

        std::cout << "Giving Product whose address is : " << product << std::endl;

        return product;
    }

    std::cout << "Pool is empty" << std::endl;

    return nullptr;
}

void ProductProvider::return_product(Product*& product)
{
    if(product != nullptr)
    {
	    m_product_pool.push_back(product);
	    product = nullptr;
	    std::cout << "Product is back, address is : " << m_product_pool.back() << std::endl;
    }
}

const int ProductProvider::get_max_product() const
{
	return m_max_products;
}
