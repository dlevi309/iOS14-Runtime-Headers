/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@protocol SWSession;
@class SWDatastore, NSString, WKUserScript;

@interface SWDatastoreUpdateScript : NSObject <SWScript> {

	SWDatastore* _datastore;
	SWDatastore* _oldDatastore;
	id<SWSession> _originatingSession;

}

@property (nonatomic,readonly) SWDatastore * datastore;                       //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) SWDatastore * oldDatastore;                    //@synthesize oldDatastore=_oldDatastore - In the implementation block
@property (nonatomic,readonly) id<SWSession> originatingSession;              //@synthesize originatingSession=_originatingSession - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)source;
-(SWDatastore *)datastore;
-(NSString *)identifier;
-(NSString *)executableScript;
-(BOOL)queueable;
-(SWDatastore *)oldDatastore;
-(id<SWSession>)originatingSession;
-(id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3 ;
@end

