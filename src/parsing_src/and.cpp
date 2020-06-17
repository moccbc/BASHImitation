#include "../../header/tokens/and.hpp"

int And::execute() {
    int left_exitStatus, right_exitStatus;

    left_exitStatus = left_child->execute();

    if (left_exitStatus == 2 || left_exitStatus == 3) {
        return left_exitStatus;
    }
    else {
        right_exitStatus = right_child->execute();
        if (right_exitStatus == 2 || right_exitStatus == 3) {
            return right_exitStatus;
        }
    }

    return right_exitStatus;
}
