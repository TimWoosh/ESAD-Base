/*
 * BaseObject.h
 *
 *  Created on: 19 sep. 2013
 *      Author: TimWoo
 */

#ifndef BASEOBJECT_H_
#define BASEOBJECT_H_


#include <string>

using namespace std;

class BaseObject {
	public:
		/**
		 *
		 */
		BaseObject();
		/**
		 * Pre:
		 * Post:
		 * @param name
		 */
		BaseObject(string name);
		/**
		 * pre: const BaseObject is a pointer to a BaseObject
		 * post: this class will be a (partial) copy of BaseObject bo  (gapend gat in post, I know)
		 * @param bo
		 */
		BaseObject(const BaseObject &bo);
		/**
		 * Pre: string name = string
		 * Post: name_ = name
		 * @param name
		 */
		~BaseObject();

		void setName(string name);
		/**
		 * Pre:
		 * Post: string name returned
		 * @return
		 */
		string getName() const;
		/**
		 *
		 * @param xnot
		 */
		void setXnot(int xnot);
		/**
		 *
		 * @return
		 */
		int getXnot();
		/**
		 *
		 * @return
		 */
		bool isDefaultConstructed();

		static void setDebugging(bool debug);
		static bool isDebugOn();

		int getID() const;

		BaseObject& operator=(const BaseObject& aBO);

	private:
		string name_;
		int xnot_;
		bool defConstr;
		int ID_;

		static int seqID;
		static bool debugging_;

		friend std::ostream& operator<<(std::ostream& os, const BaseObject& aBaseObject);
};


#endif /* BASEOBJECT_H_ */
