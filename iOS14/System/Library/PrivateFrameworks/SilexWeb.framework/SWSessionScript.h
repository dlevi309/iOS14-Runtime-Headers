/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@protocol SWSession;
@class NSString, WKUserScript;

@interface SWSessionScript : NSObject <SWScript> {

	id<SWSession> _session;

}

@property (nonatomic,readonly) id<SWSession> session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(id<SWSession>)session;
-(WKUserScript *)userScript;
-(BOOL)queuable;
@end

