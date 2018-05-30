/*
				Copyright <SWGEmu>
		See file COPYING for copying conditions.*/

#ifndef ADDALLOWEDPLAYERCOMMAND_H_
#define ADDALLOWEDPLAYERCOMMAND_H_

class AddAllowedPlayerCommand : public QueueCommand {
public:

	AddAllowedPlayerCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		return SUCCESS;
	}

};

#endif //ADDALLOWEDPLAYERCOMMAND_H_
