/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSMutableData, NSArray, MFMimePart, NSData;

@interface MFProgressiveMimeParser : NSObject {

	NSMutableData* _data;
	NSArray* _preserveHeaders;
	id _delegate;
	id _context;
	unsigned long long _cursor;
	unsigned long long _lastLength;
	MFMimePart* _topLevelPart;
	MFMimePart* _currentPart;
	NSData* _currentBoundary;
	struct {
		unsigned delegateBeganMimePart : 1;
		unsigned delegateFinishedMimePart : 1;
		unsigned delegateBeganData : 1;
		unsigned delegateFailed : 1;
		unsigned state : 3;
	}  _parserFlags;

}
-(void)setDelegate:(id)arg1 ;
-(id)data;
-(void)start;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(id)topLevelPart;
-(void)_initializeTopLevelPartWithHeaders:(id)arg1 ;
-(void)_continueParsing;
-(id)_currentBoundary;
-(void)_continueParsingStartOfPart;
-(void)_continueParsingHeaders;
-(void)_continueParsingBody;
-(id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3 ;
-(void)noteDataLengthChanged:(unsigned)arg1 ;
-(id)currentPart;
@end
