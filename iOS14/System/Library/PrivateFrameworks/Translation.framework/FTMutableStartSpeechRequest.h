/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartSpeechRequest.h>

@class NSString;

@interface FTMutableStartSpeechRequest : FTStartSpeechRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * task_name; 
@property (assign,nonatomic) long long codec; 
@property (assign,nonatomic) BOOL stream_results; 
@property (assign,nonatomic) BOOL enable_server_side_endpoint; 
@property (nonatomic,copy) NSString * device_type; 
@property (nonatomic,copy) NSString * device_os; 
@property (nonatomic,copy) NSString * mic_type; 
@property (nonatomic,copy) NSString * udm_host; 
@property (assign,nonatomic) int udm_port; 
@property (assign,nonatomic) BOOL tandem_mode; 
@property (assign,nonatomic) BOOL store_audio; 
@property (assign,nonatomic) BOOL stream_unstable_results; 
@property (nonatomic,copy) NSString * request_locale; 
@property (assign,nonatomic) long long end_point_mode; 
@property (assign,nonatomic) int start_audio_bookmark; 
@property (assign,nonatomic) BOOL is_far_field; 
@property (assign,nonatomic) BOOL enable_utterance_detection; 
@property (assign,nonatomic) BOOL enable_endpoint_candidate; 
@property (assign,nonatomic) unsigned long long start_recognition_at; 
@property (assign,nonatomic) unsigned long long start_endpointing_at; 
@property (assign,nonatomic) BOOL enable_hybrid_endpoint; 
@property (nonatomic,copy) NSString * client_endpointer_model_version; 
@property (nonatomic,copy) NSString * keyboard_identifier; 
@property (nonatomic,copy) NSString * input_origin; 
@property (assign,nonatomic) unsigned initial_recognition_candidate_id; 
@property (assign,nonatomic) BOOL disable_auto_punctuation; 
@property (assign,nonatomic) BOOL keyboard_dictation; 
@property (nonatomic,copy) NSString * experiment_id; 
@property (assign,nonatomic) long long speech_request_source; 
@property (nonatomic,copy) NSString * fork_id; 
@property (nonatomic,copy) NSString * application_name; 
@property (nonatomic,copy) NSString * metadata; 
-(long long)codec;
-(void)setCodec:(long long)arg1 ;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(NSString *)fork_id;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(NSString *)task_name;
-(void)setTask_name:(NSString *)arg1 ;
-(BOOL)stream_results;
-(void)setStream_results:(BOOL)arg1 ;
-(NSString *)device_type;
-(BOOL)enable_server_side_endpoint;
-(void)setEnable_server_side_endpoint:(BOOL)arg1 ;
-(void)setDevice_type:(NSString *)arg1 ;
-(NSString *)device_os;
-(void)setDevice_os:(NSString *)arg1 ;
-(void)setMic_type:(NSString *)arg1 ;
-(void)setUdm_host:(NSString *)arg1 ;
-(void)setUdm_port:(int)arg1 ;
-(BOOL)tandem_mode;
-(void)setTandem_mode:(BOOL)arg1 ;
-(BOOL)store_audio;
-(void)setStore_audio:(BOOL)arg1 ;
-(BOOL)stream_unstable_results;
-(void)setStream_unstable_results:(BOOL)arg1 ;
-(long long)end_point_mode;
-(void)setEnd_point_mode:(long long)arg1 ;
-(int)start_audio_bookmark;
-(void)setStart_audio_bookmark:(int)arg1 ;
-(BOOL)is_far_field;
-(void)setIs_far_field:(BOOL)arg1 ;
-(BOOL)enable_utterance_detection;
-(void)setEnable_utterance_detection:(BOOL)arg1 ;
-(BOOL)enable_endpoint_candidate;
-(void)setEnable_endpoint_candidate:(BOOL)arg1 ;
-(unsigned long long)start_recognition_at;
-(void)setStart_recognition_at:(unsigned long long)arg1 ;
-(unsigned long long)start_endpointing_at;
-(void)setStart_endpointing_at:(unsigned long long)arg1 ;
-(BOOL)enable_hybrid_endpoint;
-(void)setEnable_hybrid_endpoint:(BOOL)arg1 ;
-(NSString *)client_endpointer_model_version;
-(NSString *)input_origin;
-(void)setClient_endpointer_model_version:(NSString *)arg1 ;
-(NSString *)keyboard_identifier;
-(void)setKeyboard_identifier:(NSString *)arg1 ;
-(void)setInput_origin:(NSString *)arg1 ;
-(unsigned)initial_recognition_candidate_id;
-(void)setInitial_recognition_candidate_id:(unsigned)arg1 ;
-(BOOL)disable_auto_punctuation;
-(void)setDisable_auto_punctuation:(BOOL)arg1 ;
-(BOOL)keyboard_dictation;
-(void)setKeyboard_dictation:(BOOL)arg1 ;
-(NSString *)experiment_id;
-(void)setExperiment_id:(NSString *)arg1 ;
-(long long)speech_request_source;
-(void)setFork_id:(NSString *)arg1 ;
-(void)setSpeech_request_source:(long long)arg1 ;
-(NSString *)application_name;
-(void)setApplication_name:(NSString *)arg1 ;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(NSString *)mic_type;
-(NSString *)udm_host;
-(int)udm_port;
-(NSString *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
@end

