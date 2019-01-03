/*
 * bucket.h
 *
 *  Created on: 7 Mar 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#ifndef BUCKET_H_
#define BUCKET_H_

#include <vector>
#include <iostream>


const int size = 3;
//std::vector<std::vector<int>> buckets(size, std::vector<int>(10));


class Bucket
{
public:
	Bucket();
	void bucketSort();



private:
//    std::array<std::array<int, 10>, size> buckets;
	std::vector<std::vector<int> > buckets;



};



#endif /* BUCKET_H_ */
