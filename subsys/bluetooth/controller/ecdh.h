#include <stdint.h>

#include <bluetooth/hci.h>

// TODO: remove when definitions exists in downstream bluetooth/hci.h

#define BT_HCI_OP_LE_GENERATE_DHKEY_V2          BT_OP(BT_OGF_LE, 0x005e)

#define BT_HCI_LE_KEY_TYPE_GENERATED            0x00
#define BT_HCI_LE_KEY_TYPE_DEBUG                0x01

struct bt_hci_cp_le_generate_dhkey_v2 {
	uint8_t key[64];
	uint8_t key_type;
} __packed;

void hci_ecdh_init(void);

uint8_t hci_cmd_le_read_local_p256_public_key(void);

uint8_t hci_cmd_le_generate_dhkey(struct bt_hci_cp_le_generate_dhkey *p_params);

uint8_t hci_cmd_le_generate_dhkey_v2(
	struct bt_hci_cp_le_generate_dhkey_v2 *p_params);
