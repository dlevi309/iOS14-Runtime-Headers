/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NWNetworkDescription, NSArray, NWEndpoint, NWParameters, NWPathEvaluator, NSUUID, NSURL, NWInterface, NSString;

@interface NWMonitor : NSObject <NSURLSessionTaskDelegate> {

	unsigned _mID;
	long long _status;
	NWNetworkDescription* _bestAvailableNetworkDescription;
	NSArray* _networkDescriptionArray;
	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NWPathEvaluator* _pathEvaluator;
	NSUUID* _lastProbeUUID;
	NSURL* _lastProbeURL;
	NWInterface* _interface;

}

@property (assign) long long status;                                                    //@synthesize status=_status - In the implementation block
@property (retain) NWNetworkDescription * bestAvailableNetworkDescription;              //@synthesize bestAvailableNetworkDescription=_bestAvailableNetworkDescription - In the implementation block
@property (retain) NSArray * networkDescriptionArray;                                   //@synthesize networkDescriptionArray=_networkDescriptionArray - In the implementation block
@property (retain) NWParameters * parameters;                                           //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                               //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NWPathEvaluator * pathEvaluator;                                     //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (retain) NSUUID * lastProbeUUID;                                              //@synthesize lastProbeUUID=_lastProbeUUID - In the implementation block
@property (retain) NSURL * lastProbeURL;                                                //@synthesize lastProbeURL=_lastProbeURL - In the implementation block
@property (retain) NWInterface * interface;                                             //@synthesize interface=_interface - In the implementation block
@property (assign) unsigned mID;                                                        //@synthesize mID=_mID - In the implementation block
@property (nonatomic,readonly) NSString * privateDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)monitorWithNetworkDescription:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)mainOperationQueue;
+(void)saveMonitor:(id)arg1 ;
+(id)monitorWithNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
+(id)queue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)copySavedMonitorForNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(NSString *)privateDescription;
-(unsigned)mID;
-(void)setInterface:(NWInterface *)arg1 ;
-(BOOL)matchesNetworkDescriptionArray:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(NSUUID *)lastProbeUUID;
-(NWNetworkDescription *)bestAvailableNetworkDescription;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(NSURL *)lastProbeURL;
-(NWEndpoint *)endpoint;
-(NWInterface *)interface;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)description;
-(void)setLastProbeUUID:(NSUUID *)arg1 ;
-(void)setNetworkDescriptionArray:(NSArray *)arg1 ;
-(void)evaluateStartingAtIndex:(unsigned long long)arg1 probeUUID:(id)arg2 probeWasSuccessful:(BOOL)arg3 ;
-(void)setLastProbeURL:(NSURL *)arg1 ;
-(void)setMID:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)setBestAvailableNetworkDescription:(NWNetworkDescription *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(void)dealloc;
-(NSArray *)networkDescriptionArray;
@end

