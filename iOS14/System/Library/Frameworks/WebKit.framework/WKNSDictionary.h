/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSDictionary : NSDictionary <WKObject> {

	ObjectStorage<API::Dictionary> _dictionary;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(Object*)_apiObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

