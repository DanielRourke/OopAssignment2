/*
 * Ticket.h
 *
 *  Created on: 27 Sep. 2018
 *      Author: dongmo
 */

#ifndef TICKET_H_
#define TICKET_H_

#include "Constants.h"

class Ticket {
protected:
	int date;
	int fullPrice;
	double discount;
public:
	Ticket(int d, int f) :
			date(d), fullPrice(f) {
		discount = 0.0;
	}

	int getDate() {
		return date;
	}

	double getTicketPrice() {
		return (1.0-discount) * fullPrice;
	}

	virtual void printTicket() = 0;

	virtual ~Ticket() {
	}
};

#endif /* TICKET_H_ */
