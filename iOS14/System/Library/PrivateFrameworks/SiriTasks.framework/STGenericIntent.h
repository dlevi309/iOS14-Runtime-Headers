/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, AFSiriTask, STGenericIntentRequest;

@interface STGenericIntent : NSObject <NSSecureCoding> {

	BOOL _appInForeground;
	BOOL _isLaunch;
	BOOL _handled;
	BOOL _finishedState;
	NSString* _name;
	NSString* _utterance;
	NSString* _attributes;
	NSMutableDictionary* _parameters;
	AFSiriTask* _siriTask;
	STGenericIntentRequest* _intentRequest;

}

@property (nonatomic,retain) NSMutableDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) AFSiriTask * siriTask;                               //@synthesize siriTask=_siriTask - In the implementation block
@property (nonatomic,retain) STGenericIntentRequest * intentRequest;              //@synthesize intentRequest=_intentRequest - In the implementation block
@property (assign,nonatomic) BOOL handled;                                        //@synthesize handled=_handled - In the implementation block
@property (assign,nonatomic) BOOL finishedState;                                  //@synthesize finishedState=_finishedState - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * utterance;                                  //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy) NSString * attributes;                                 //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL appInForeground;                                //@synthesize appInForeground=_appInForeground - In the implementation block
@property (assign,nonatomic) BOOL isLaunch;                                       //@synthesize isLaunch=_isLaunch - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(void)finished;
-(NSString *)utterance;
-(void)setAttributes:(NSString *)arg1 ;
-(void)setUtterance:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHandled:(BOOL)arg1 ;
-(NSString *)name;
-(NSString *)attributes;
-(id)initWithName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)handled;
-(BOOL)finishedState;
-(void)setFinishedState:(BOOL)arg1 ;
-(AFSiriTask *)siriTask;
-(STGenericIntentRequest *)intentRequest;
-(void)setSiriTask:(AFSiriTask *)arg1 ;
-(void)setIntentRequest:(STGenericIntentRequest *)arg1 ;
-(void)handleWithProgress:(long long)arg1 ;
-(id)getDateRangeParameter:(id)arg1 ;
-(id)getTopicParameter:(id)arg1 ;
-(id)getPersonParameter:(id)arg1 ;
-(id)getGroupParameter:(id)arg1 ;
-(id)getPlacesParameter:(id)arg1 ;
-(void)addParam:(id)arg1 withValue:(id)arg2 ;
-(BOOL)appInForeground;
-(void)setAppInForeground:(BOOL)arg1 ;
-(BOOL)isLaunch;
-(void)setIsLaunch:(BOOL)arg1 ;
@end

