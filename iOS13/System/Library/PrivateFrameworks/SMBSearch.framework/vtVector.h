/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class NSMutableArray;

@interface vtVector : NSObject {

	unsigned _vVectorElements;
	NSMutableArray* _vVectorData;

}

@property (assign) unsigned vVectorElements;                  //@synthesize vVectorElements=_vVectorElements - In the implementation block
@property (retain) NSMutableArray * vVectorData;              //@synthesize vVectorData=_vVectorData - In the implementation block
-(id)init;
-(int)addElement:(id)arg1 ;
-(NSMutableArray *)vVectorData;
-(unsigned)vVectorElements;
-(void)setVVectorElements:(unsigned)arg1 ;
-(void)setVVectorData:(NSMutableArray *)arg1 ;
@end

