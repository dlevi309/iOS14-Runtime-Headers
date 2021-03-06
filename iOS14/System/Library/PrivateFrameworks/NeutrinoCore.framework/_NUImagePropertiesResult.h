/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImagePropertiesResult.h>

@protocol NUImageProperties;
@class NSString;

@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult> {

	id<NUImageProperties> _properties;

}

@property (retain) id<NUImageProperties> properties;                 //@synthesize properties=_properties - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUImageProperties>)properties;
-(NSString *)description;
-(void)setProperties:(id<NUImageProperties>)arg1 ;
@end

