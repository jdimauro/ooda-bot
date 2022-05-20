#define VMLPIN	5	// Vibration motor pin left
#define VMRPIN	6	// Vibration motor pin right


// State Machine Constants
#define IS_BORN			0;		// give all just-constructed state machines the same value?
#define IS_INIT			1;		// initialized state machine


class StateMachine {
public:
	// Constructor
	StateMachine() {

	}
	// Class Member Variables
	int state = IS_BORN;
	unsigned long previousMillis;

};

class Sensor : public StateMachine {
private:
	int input_pin;

public:
	//Constructor
	Sensor(int p) {
		this->input_pin = p;
		pinMode(this->input_pin, INPUT);
		this->state = IS_INIT;
	}

	// Class Member Variables

	bool Update() {
		return true;
	}
};

// Inititalize object memory?

Sensor *pressuresensor1;

void setup() {
	//pinMode(VMLPIN, OUTPUT);
	//pinMode(VMRPIN, OUTPUT);

	pressuresensor1 = new Sensor(A0);
}

void loop() {

	// OODA
	// Observe 	- e.g. check all inputs
	// Orient		-	e.g. check current position, relative to targets	
	// Decide		- 
	// Act			- 

}

