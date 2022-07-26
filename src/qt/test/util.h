#ifndef LITELIRA_QT_TEST_UTIL_H
#define LITELIRA_QT_TEST_UTIL_H

/**
 * Press "Ok" button in message box dialog.
 *
 * @param text - Optionally store dialog text.
 * @param msec - Number of miliseconds to pause before triggering the callback.
 */
void ConfirmMessage(QString* text = nullptr, int msec = 0);

#endif // LITELIRA_QT_TEST_UTIL_H
