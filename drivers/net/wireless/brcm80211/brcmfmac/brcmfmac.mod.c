#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8e9fb26, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x247020ad, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x74cc4ec3, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x7eeed485, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x180ab36b, __VMLINUX_SYMBOL_STR(platform_driver_probe) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2dc227f8, __VMLINUX_SYMBOL_STR(brcmu_d11_attach) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x1fb1b0fb, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xee7bcf69, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x8acafd19, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x17e87ccb, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x100357f5, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x6b1755b3, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_get_skb) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x600885b1, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9004a041, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_tail) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa6671f53, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq) },
	{ 0xd383065e, __VMLINUX_SYMBOL_STR(cfg80211_del_sta) },
	{ 0xfea112d5, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0xf75304d8, __VMLINUX_SYMBOL_STR(brcmu_pktq_mdeq) },
	{ 0x2e512566, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf890557, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb8f4ce00, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x2ff817, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa8f49877, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xc9a8ca70, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x99b40e37, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x6470dc9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe837f9a3, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x28b3aa0b, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5e29a1e7, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_match) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b07d4f1, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x8098c143, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x62b50f47, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xdcc165c0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf363f17b, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x552a2bde, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x65135941, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x4a611e9c, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf929344f, __VMLINUX_SYMBOL_STR(brcmu_pktq_peek_tail) },
	{ 0x62a0f753, __VMLINUX_SYMBOL_STR(brcmu_pktq_flush) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe909960d, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5cf34d88, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x2e09c491, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x12b2a109, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd9605d4c, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaca912d0, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0xca2ac2d4, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x3a5986da, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xc7f143e3, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xc856260, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xfaeeae22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf0a2f1c4, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x75958fb1, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xa28a4125, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x13ba780d, __VMLINUX_SYMBOL_STR(wiphy_new) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc9d44bab, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb54ba7cc, __VMLINUX_SYMBOL_STR(cfg80211_crit_proto_stopped) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfe175448, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x45a63ca8, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1778ed5b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf73c0e81, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x799218f4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xbffb0b40, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe43b6684, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x64872514, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8fd49e95, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8448b96d, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc00df364, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6451ee14, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x6df709aa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x76ae23ae, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0x9770dd82, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq_head) },
	{ 0xc6de7045, __VMLINUX_SYMBOL_STR(brcmu_pktq_init) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xe9daf31a, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6cb625b3, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x2b937686, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6ea1ce80, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x3ccaddf7, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0xd43be3fa, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xe69ec463, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd1609ba1, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xc9e6c9b9, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0xf7a0c8e3, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x44d9b45b, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4879829c, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2926735b, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_free_skb) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x842efbfb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6c75d238, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb348d0d8, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xfba0f1ab, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x95a17118, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0x67c78738, __VMLINUX_SYMBOL_STR(brcmu_pktq_mlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=brcmutil";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0d4335*");

MODULE_INFO(srcversion, "BF2D49BE29B50D6B22BA2D4");
