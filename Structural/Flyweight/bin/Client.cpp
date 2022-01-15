#include "../inc/IntrinsicProductPartLibrary.hpp"
#include "../inc/Product.hpp"

int main()
{
	int product_id = 4;

	IntrinsicProductPartLibrary intrinsic_product_part_library;

	ExtrinsicProductPart* extrinsic_product_part1 = new ExtrinsicProductPart(product_id);
	ExtrinsicProductPart* extrinsic_product_part2 = new ExtrinsicProductPart(product_id);


	Product* product1 = new Product(intrinsic_product_part_library.get_intrinsic_product_part(product_id), extrinsic_product_part1);
	product1->operation();

	Product* product2 = new Product(intrinsic_product_part_library.get_intrinsic_product_part(product_id), extrinsic_product_part2);
	product2->operation();


	product_id++;

	ExtrinsicProductPart* extrinsic_product_part3 = new ExtrinsicProductPart(product_id);

	Product* product3 = new Product(intrinsic_product_part_library.get_intrinsic_product_part(product_id), extrinsic_product_part3);
	product2->operation();


	delete product1;
	delete product2;
	delete product3;
	delete extrinsic_product_part1;
	delete extrinsic_product_part2;
	delete extrinsic_product_part3;

	return 0;
}
