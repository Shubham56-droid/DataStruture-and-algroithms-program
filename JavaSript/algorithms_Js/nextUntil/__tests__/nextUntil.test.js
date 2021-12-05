import NextUntil from '../nextUntil';

const redline = [
  {
    name: 'paraMarker',
  },
  {
    name: 'change',
    type: 'del',
    value: 'foo',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'span',
    value: 'The Directors',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'change',
    type: 'replace',
    value: 'foo',
  },
  {
    name: 'span',
    value: ' Bonds Plc Issuer Plc',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'span',
    value:
      'The Lead Manager and the other Managers (as defined in paragraph 2 below)',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'span',
    value: '[Date]',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'span',
    value: 'Dear Sirs,',
  },
  {
    name: 'paraMarker',
  },
  {
    name: 'span',
    value: 'PROPOSED ',
  },
  {
    name: 'change',
    type: 'replace',
    value: 'bar',
  },
  {
    name: 'span',
    value: ' BONDS PLC ISSUE BY ',
  },
  {
    name: 'change',
    type: 'replace',
    value: 'foo',
  },
  {
    name: 'span',
    value: ' BONDS PLC ISSUER PLC (“the Issuer”)',
  },
  {
    name: 'paraMarker',
  },
];

describe('Get the max stack', () => {
  it('return the largest item in the stack', () => {
    const nextUntil = new NextUntil(redline);

    expect(nextUntil).toEqual({});
  });
});
