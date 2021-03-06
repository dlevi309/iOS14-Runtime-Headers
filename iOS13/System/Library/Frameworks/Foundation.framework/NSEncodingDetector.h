/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSEncodingDetector : NSObject {

	unsigned long long _nsEncoding;
	unsigned _cfEncoding;
	unsigned long long _givenNumBytes;
	unsigned long long _numChars;
	unsigned long long _numMultiByteChars;
	unsigned long long _numSingleBytechars;
	unsigned long long _skipBytes;
	unsigned long long _numZeroBytes;
	unsigned long long _mostFrqChars;
	unsigned long long _numBigrams;
	unsigned long long _numRep;
	unsigned long long _numDirect;
	unsigned long long _numBase64;
	unsigned long long _numSeq;
	unsigned long long _numTrigram;
	unsigned long long _numLower;
	unsigned long long _numHigher;
	double _weight;
	BOOL _hasBase64;
	BOOL _isBigEndian;
	BOOL _hasBOM;
	unsigned _tag;

}

@property (readonly) unsigned long long nsEncoding;              //@synthesize nsEncoding=_nsEncoding - In the implementation block
@property (readonly) unsigned cfEncoding;                        //@synthesize cfEncoding=_cfEncoding - In the implementation block
+(Class)classForCFStringEncoding:(unsigned)arg1 ;
+(id)detectorForCFStringEncoding:(unsigned)arg1 allowBackupDetectors:(BOOL)arg2 ;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(unsigned long long)recognizeString:(const char*)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3 ;
-(void)reset;
-(id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned)arg2 ;
-(void)softReset;
-(double)bytesRatio;
-(unsigned long long)maxSkipBytes;
-(double)confidence;
-(double)confidenceWith2Chars;
-(double)multiBytesRatio;
@end

