import {displayPerfTime} from '../../utils/perf-utils';

import {isPalindrome} from '.';

describe('isPalindrome', () => {
  it('should spot the palindrome right', () => {
    expect(isPalindrome("Madam, I'm Adam")).toBeTruthy();
  });
  it('should spot the palindrome right', () => {
    expect(
      isPalindrome(
        "T. Eliot, top bard, notes putrid tang emanating, is sad; I'd assign it a name: gnat dirt upset on drab pot toilet."
      )
    ).toBeTruthy();
  });

  it('should spot a not-palindrome', () => {
    expect(isPalindrome("Madam, I'm Larry")).toBeFalsy();
  });

  describe('Performance', () => {
    it('will display perftime', () => {
      displayPerfTime('isPalindrome("Madam, I\'m Adam")', () => {
        isPalindrome("Madam, I'm Adam");
      });
    });

    it('will display perftime with another palindrome', () => {
      displayPerfTime('isPalindrome("long one")', () => {
        isPalindrome(
          "T. Eliot, top bard, notes putrid tang emanating, is sad; I'd assign it a name: gnat dirt upset on drab pot toilet."
        );
      });
    });
  });
});
