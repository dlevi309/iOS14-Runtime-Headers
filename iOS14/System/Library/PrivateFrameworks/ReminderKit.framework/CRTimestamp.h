/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding> {

	NSUUID* _replica;
	long long _counter;

}

@property (nonatomic,retain) NSUUID * replica;                      //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long counter;                     //@synthesize counter=_counter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)compare:(id)arg1 ;
-(void)encodeIntoProtobufTimestamp:(Timestamp*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufTimestamp:(const Timestamp*)arg1 decoder:(id)arg2 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(NSUUID *)replica;
-(id)shortDescription;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(id)initWithReplica:(id)arg1 andCounter:(long long)arg2 ;
-(void)mergeWith:(id)arg1 ;
-(BOOL)isEqualToTimestamp:(id)arg1 ;
-(id)nextTimestampForReplica:(id)arg1 ;
-(id)nextTimestamp;
-(id)earlierTimestamp:(id)arg1 ;
-(id)laterTimestamp:(id)arg1 ;
-(long long)counter;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)tombstone;
-(void)setCounter:(long long)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

