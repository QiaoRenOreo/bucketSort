/*
 * bucket.cpp
 *
 *  Created on: 7 Mar 2017
 *      Author: Alexander Green, Qiao Ren
 *		 Group: 15
 */

#include "bucket.h"

Bucket::Bucket()
{
	int entry = 3;
	std::vector<std::vector<int> > b;
	b.push_back(std::vector<int>());
	b[0].push_back(entry);
}

void Bucket::bucketSort()
{
	std::cout<<"Starting...";
int entry = 0;
int bucket = 0;

	for(int row=0; row<size; row++)
		{
			for(int column=0; column<size; column++)
			{
				entry = buckets[row][column];
				bucket = entry*(10^(-row))%10;

				std::cout<<"Entry "<<entry<<" goes in bucket "<<bucket;
			}
		}
}


