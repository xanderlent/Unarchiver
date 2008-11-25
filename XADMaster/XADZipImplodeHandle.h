#import "XADLZSSHandle.h"
#import "XADPrefixTree.h"

@interface XADZipImplodeHandle:XADLZSSHandle
{
	XADPrefixTree *literaltree,*lengthtree,*offsettree;
	int offsetbits;
	BOOL literals;
}

-(id)initWithHandle:(CSHandle *)handle length:(off_t)length
largeDictionary:(BOOL)largedict literalTree:(BOOL)hasliterals;
-(void)dealloc;

-(void)resetLZSSHandle;
-(XADPrefixTree *)parseTreeOfSize:(int)size;
-(int)nextLiteralOrOffset:(int *)offset andLength:(int *)length;

@end