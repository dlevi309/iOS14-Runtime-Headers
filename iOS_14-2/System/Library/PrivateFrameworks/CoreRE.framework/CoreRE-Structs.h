/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@class NSObject<OS_dispatch_object>;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct array<std::__1::vector<float, std::__1::allocator<float> >, 2> {
	vector<float, std::__1::allocator<float> > __elems_[2];
} array<std::__1::vector<float, std::__1::allocator<float> >, 2>;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct _compressed_pair<REJitterBuffer *, std::__1::default_delete<REJitterBuffer> > {
	REJitterBuffer __value_;
} compressed_pair<REJitterBuffer *, std::__1::default_delete<REJitterBuffer> >;

typedef struct unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer> > {
	compressed_pair<REJitterBuffer *, std::__1::default_delete<REJitterBuffer> > __ptr_;
} unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer> >;

typedef struct shared_ptr<REPacketEncoder> {
	REPacketEncoder __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<REPacketEncoder>;

typedef struct _compressed_pair<REEncodePayloadPool *, std::__1::default_delete<REEncodePayloadPool> > {
	REEncodePayloadPool __value_;
} compressed_pair<REEncodePayloadPool *, std::__1::default_delete<REEncodePayloadPool> >;

typedef struct unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool> > {
	compressed_pair<REEncodePayloadPool *, std::__1::default_delete<REEncodePayloadPool> > __ptr_;
} unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool> >;

typedef struct _compressed_pair<caulk::concurrent::messenger *, std::__1::default_delete<caulk::concurrent::messenger> > {
	messenger __value_;
} compressed_pair<caulk::concurrent::messenger *, std::__1::default_delete<caulk::concurrent::messenger> >;

typedef struct unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger> > {
	compressed_pair<caulk::concurrent::messenger *, std::__1::default_delete<caulk::concurrent::messenger> > __ptr_;
} unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger> >;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > {
	queue<GainRampCommand> __value_;
} compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > >;

typedef struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > {
	compressed_pair<boost::lockfree::queue<GainRampCommand> *, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > > __ptr_;
} unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand> > >;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic<bool>;

typedef struct _cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> > {
	Af __a_value;
} cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> >;

typedef struct atomic<float> {
	cxx_atomic_impl<float, std::__1::__cxx_atomic_base_impl<float> > __a_;
} atomic<float>;

typedef struct shared_ptr<AudioStreamRecordingManager::StreamWriter> {
	StreamWriter __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AudioStreamRecordingManager::StreamWriter>;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct _cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > {
	Ad __a_value;
} cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> >;

typedef struct atomic<double> {
	cxx_atomic_impl<double, std::__1::__cxx_atomic_base_impl<double> > __a_;
} atomic<double>;

typedef struct _cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> > {
	AQ __a_value;
} cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> >;

typedef struct atomic<REAudioPlaybackState> {
	cxx_atomic_impl<REAudioPlaybackState, std::__1::__cxx_atomic_base_impl<REAudioPlaybackState> > __a_;
} atomic<REAudioPlaybackState>;

typedef struct _cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > {
	AI __a_value;
} cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >;

typedef struct atomic<unsigned int> {
	cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > __a_;
} atomic<unsigned int>;

typedef struct _cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > {
	Ai __a_value;
} cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >;

typedef struct atomic<int> {
	cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > __a_;
} atomic<int>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SubscriptionLegacy m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	Subscription m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription>;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> > {
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> m_subscriptions;
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SubscriptionLegacy m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy>;

typedef struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	Subscription m_data;
} DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription>;

typedef struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > {
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> m_subscriptions;
	DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> m_subscriptionsLegacy;
} Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >;

typedef struct DynamicArray<re::IDSInvite *> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	IDSInvite m_data;
} DynamicArray<re::IDSInvite *>;

typedef struct DynamicArray<re::IDSDiscoveryView *> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	IDSDiscoveryView m_data;
} DynamicArray<re::IDSDiscoveryView *>;

typedef struct object {
	NSObject<OS_dispatch_object>* fObj;
} object;

typedef struct DynamicString {
	Allocator m_allocator;
	char* m_buffer;
	unsigned long long m_capacity;
	unsigned long long m_length;
} DynamicString;

typedef struct queue {
	object fObj;
} queue;

typedef struct Config {
	ServiceLocator serviceLocator;
	queue dispatchQueue;
	DynamicString serviceID;
} Config;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> > {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	SharedPtr<(anonymous namespace)::MCProtocolHandle> m_data;
} DynamicArray<re::SharedPtr<(anonymous namespace)::MCProtocolHandle> >;

typedef struct DynamicArray<unsigned char> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned m_version;
	char* m_data;
} DynamicArray<unsigned char>;

typedef struct Queue<QueuedUpdateMessage> {
	Allocator m_allocator;
	unsigned long long m_capacity;
	unsigned long long m_size;
	unsigned long long m_head;
	unsigned m_version;
	QueuedUpdateMessage m_data;
} Queue<QueuedUpdateMessage>;

typedef struct UnfairLock {
	os_unfair_lock_s m_lock;
} UnfairLock;

typedef struct {
	[4 columns];
} SCD_Struct_RE47;
