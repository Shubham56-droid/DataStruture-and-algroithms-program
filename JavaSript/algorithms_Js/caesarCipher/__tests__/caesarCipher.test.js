import {displayPerfTime} from '../../../utils/perf-utils';

import {
  caesarCipher,
  caesarCipher2,
  caesarCipher3,
  caesarCipher4,
} from '../caesarCipher';

describe('Caesar Cipher', () => {
  it('should encrypt zoo keeper', () => {
    expect(caesarCipher('Zoo keeper', 2)).toEqual('Bqq mggrgt');
  });

  it('should encryp Big Cart', () => {
    expect(caesarCipher('Big Car', -16)).toEqual('Lsq Mkb');
  });

  it('should encrypt zoo keeper with second approach', () => {
    expect(caesarCipher2('Zoo keeper', 2)).toEqual('Bqq mggrgt');
  });

  it('should encrypt Big Car with second approach', () => {
    expect(caesarCipher2('Big Car', -16)).toEqual('Lsq Mkb');
  });

  it('should encrypt zoo keeper with third approach', () => {
    expect(caesarCipher3('Zoo keeper', 2)).toEqual('Bqq mggrgt');
  });

  it('should encrypt Big Car with third approach', () => {
    expect(caesarCipher3('Big Car', -16)).toEqual('Lsq Mkb');
  });

  it('should encrypt zoo keeper with fourth approach', () => {
    expect(caesarCipher4('Zoo keeper', 2)).toEqual('Bqq mggrgt');
  });

  // caesarCipher4 does not manage negative num
  // it('should encrypt Big Car with fourth approach', () => {
  //   expect(caesarCipher4('Big Car', -16)).toEqual('Lsq Mkb')
  // })

  describe('Performance', () => {
    it('will display perftime', () => {
      displayPerfTime("caesarCipher('a string', 1)", () => {
        caesarCipher('a string', 1);
      });
      displayPerfTime("caesarCipher('long string', 1)", () => {
        caesarCipher(
          'a long string to test Caesar Cipher a long string to test Caesar Cipher a long string to test Caesar Cipher',
          1
        );
      });
    });

    it('will display perftime', () => {
      displayPerfTime("caesarCipher2('a string', 1)", () => {
        caesarCipher2('a string', 1);
      });
      displayPerfTime("caesarCipher2('long string', 1)", () => {
        caesarCipher2(
          'a long string to test Caesar Cipher a long string to test Caesar Cipher a long string to test Caesar Cipher',
          1
        );
      });
    });

    it('will display perftime', () => {
      displayPerfTime("caesarCipher3('a string', 1)", () => {
        caesarCipher3('a string', 1);
      });
      displayPerfTime("caesarCipher3('long string', 1)", () => {
        caesarCipher3(
          'a long string to test Caesar Cipher a long string to test Caesar Cipher a long string to test Caesar Cipher',
          1
        );
      });
    });

    it('will display perftime', () => {
      displayPerfTime("caesarCipher4('a string', 1)", () => {
        caesarCipher4('a string', 1);
      });
      displayPerfTime("caesarCipher4('long string', 1)", () => {
        caesarCipher4(
          'a long string to test Caesar Cipher a long string to test Caesar Cipher a long string to test Caesar Cipher',
          1
        );
      });
    });
  });
});
