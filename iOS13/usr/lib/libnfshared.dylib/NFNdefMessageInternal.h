/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefMessage.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessageInternal : NSObject <NSSecureCoding, NFNdefMessage> {

	NSMutableArray* _records;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * records; 
+(BOOL)supportsSecureCoding;
+(id)decodeFromNDEFMessage:(id)arg1 ;
+(id)dataFromNDEFMessage:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)asData;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)decode;
-(id)initWithNDEFMessage:(id)arg1 ;
-(void)addRecordArray:(id)arg1 ;
@end

