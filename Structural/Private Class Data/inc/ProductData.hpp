#ifndef PRODUCTDATA_HPP
#define PRODUCTDATA_HPP

class ProductData
{
public:

	ProductData(const int id, const int value);
	virtual ~ProductData();

	int get_id() const;
	int get_value() const;

private:

	int m_id;
	int m_value;

};

#endif
