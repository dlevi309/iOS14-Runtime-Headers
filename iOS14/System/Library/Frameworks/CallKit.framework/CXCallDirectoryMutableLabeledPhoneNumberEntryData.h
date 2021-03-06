/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallDirectoryLabeledPhoneNumberEntryData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying> {

	NSMutableData* _mutablePhoneNumberData;
	NSMutableData* _mutableLabelData;
	NSMutableDictionary* _labelToLabelDataOffset;

}

@property (nonatomic,retain) NSMutableData * mutablePhoneNumberData;                    //@synthesize mutablePhoneNumberData=_mutablePhoneNumberData - In the implementation block
@property (nonatomic,retain) NSMutableData * mutableLabelData;                          //@synthesize mutableLabelData=_mutableLabelData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * labelToLabelDataOffset;              //@synthesize labelToLabelDataOffset=_labelToLabelDataOffset - In the implementation block
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableData *)mutablePhoneNumberData;
-(NSMutableData *)mutableLabelData;
-(BOOL)appendPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(void)setMutablePhoneNumberData:(NSMutableData *)arg1 ;
-(void)setMutableLabelData:(NSMutableData *)arg1 ;
-(NSMutableDictionary *)labelToLabelDataOffset;
-(void)setLabelToLabelDataOffset:(NSMutableDictionary *)arg1 ;
@end

