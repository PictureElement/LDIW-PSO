/*
 * MIT License
 *
 * Copyright 2016 Marios Sofokleous
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to deal 
 * in the Software without restriction, including without limitation the rights 
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
 * copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
 * SOFTWARE.
 * 
 * File: fitness.cpp
 * Description: Test functions 
 * Created: 24.03.2016
 * Author: Sofokleous Marios
 */

#include "fitness.h"

/*
// Test Function: Griewank
double fitness_funct (const std::vector<double>& var, bool flag, int dim) {
		double sum = 0.0;
		double product = 1.0;
		for (int i = 0; i < dim; i++) {
				sum = sum + (var[i] * var[i]);
				product = product * cos (var[i] / sqrt (dim+1));
		}
		double result = 1.0 + (sum / 4000.0) - product;
		return result;
}

// Test Function: Ackley
double fitness_funct (const std::vector<double>& var, bool flag, int dim) {

	double sum1 = 0.0;
	double sum2 = 0.0;
	double result;

	// Recommended parameter values
	double a = 20.0;
	double b = 0.2;
	double c = 2 * PI;

	for (int i = 0; i < dim; i++) {
			sum1 = sum1 + (var[i] * var[i]);
			sum2 = sum2 + cos (c * var[i]);
	}

	result = (-a * exp (-b * sqrt ((1.0 / dim) * sum1))) - exp ((1.0 / dim) * sum2) + a + exp (1);
	return result;
}

// Test Function: Rastrigin
double fitness_funct (const std::vector<double>& var, bool flag, int dim) {
		double result = 0.0;
		for (int i = 0; i < dim; i++)
				result = result + (var[i] * var[i]) - (10 * cos(2 * PI * var[i]));
		result = (10 * dim) + result;
		return result;
}
*/
// Test Function: Rosenbrock
double fitness_funct (const vector<double>& var, bool flag, int dim) {
    double result = 0.0;
    for (int i = 0; i < dim-1; i++)
    		result = result + 100 * (var[i+1] - (var[i] * var[i])) * (var[i+1] - (var[i] * var[i])) + (1 - var[i]) * (1 - var[i]);
    return result;
}

/*
// Test Function: De Jong's Sphere
double fitness_funct (const vector<double>& var, bool flag, int dim) {
		double result = 0.0;
    for (int i = 0; i < dim; i++)
    		result = result + var[i] * var[i];
    return result;
}
*/