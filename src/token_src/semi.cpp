#include "../../header/tokens/semi.hpp"

int Semi::execute() {
    int left_exitStatus;
    int right_exitStatus;

    left_exitStatus = left_child->execute();
    right_exitStatus = right_child->execute();

    return right_exitStatus;
}
