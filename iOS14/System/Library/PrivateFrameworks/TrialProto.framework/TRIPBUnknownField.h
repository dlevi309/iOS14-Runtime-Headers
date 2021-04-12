/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBUInt64Array, TRIPBUInt32Array, NSMutableArray, NSArray;

@interface TRIPBUnknownField : NSObject <NSCopying> {

	int number_;
	TRIPBUInt64Array* mutableVarintList_;
	TRIPBUInt32Array* mutableFixed32List_;
	TRIPBUInt64Array* mutableFixed64List_;
	NSMutableArray* mutableLengthDelimitedList_;
	NSMutableArray* mutableGroupList_;

}

@property (nonatomic,readonly) int number; 
@property (nonatomic,readonly) TRIPBUInt64Array * varintList; 
@property (nonatomic,readonly) TRIPBUInt32Array * fixed32List; 
@property (nonatomic,readonly) TRIPBUInt64Array * fixed64List; 
@property (nonatomic,readonly) NSArray * lengthDelimitedList; 
@property (nonatomic,readonly) NSArray * groupList; 
-(NSArray *)groupList;
-(int)number;
-(id)description;
-(unsigned long long)hash;
-(id)initWithNumber:(int)arg1 ;
-(void)addGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(TRIPBUInt64Array *)varintList;
-(TRIPBUInt32Array *)fixed32List;
-(TRIPBUInt64Array *)fixed64List;
-(NSArray *)lengthDelimitedList;
-(unsigned long long)serializedSize;
-(void)writeToOutput:(id)arg1 ;
-(void)addVarint:(unsigned long long)arg1 ;
-(void)addFixed64:(unsigned long long)arg1 ;
-(void)addLengthDelimited:(id)arg1 ;
-(void)addFixed32:(unsigned)arg1 ;
-(void)writeAsMessageSetExtensionToOutput:(id)arg1 ;
-(unsigned long long)serializedSizeAsMessageSetExtension;
-(void)mergeFromField:(id)arg1 ;
@end
