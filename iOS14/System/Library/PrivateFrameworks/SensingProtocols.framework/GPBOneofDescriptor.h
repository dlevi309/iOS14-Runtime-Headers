/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/


@class NSArray, NSString;

@interface GPBOneofDescriptor : NSObject {

	const char* name_;
	NSArray* fields_;
	SEL caseSel_;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
-(NSArray *)fields;
-(NSString *)name;
-(id)initWithName:(const char*)arg1 fields:(id)arg2 ;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)fieldWithName:(id)arg1 ;
-(void)dealloc;
@end

