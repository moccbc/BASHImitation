#include "../../header/tokens/Or.hpp"

int Or::execute() {
    int left_exitStatus, right_exitStatus;

    left_exitStatus = left_child->execute();

    // If the left expression is an error
    if (left_exitStatus == 3) {
        right_exitStatus = right_child->execute();
        return right_exitStatus;
    }
    // If the left expression runs successfully or exit is called

    return left_exitStatus;
}
