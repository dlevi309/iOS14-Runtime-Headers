/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSMutableArray, NSArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	BOOL _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) BOOL serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithConsumer:(id)arg1 ;
+(id)filterWithConsumers:(id)arg1 ;
-(void)done;
-(NSArray *)consumers;
-(id)initWithConsumer:(id)arg1 ;
-(long long)appendData:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(BOOL)isSerialAppend;
-(void)setSerialAppend:(BOOL)arg1 ;
@end

