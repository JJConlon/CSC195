#pragma once
#include <initializer_list>

namespace nc {

	template<typename T, size_t Size>
	class array {
	public:
		array() {}
		array(const std::initializer_list<T>& ilist) {
			size_t i = 0;
			for (auto iter = ilist.begin(); iter != ilist.end(); iter++) {
				m_elements[i] = *iter;
				i++;
			}
		};

		T& operator [] (size_t position) { T& i = m_elements[position]; return i; }
		const T& operator [] (size_t position) const { const T& i = m_elements[position]; return i; }
		T& at(size_t position) { T& i = m_elements[position]; return i; }
		const T& at(size_t position) const { const T& i = m_elements[position]; return i; }

		T& front() { T& i = m_elements[0]; return i; }
		T& back() { T& i = m_elements[m_size - 1]; return i; }

		T* data() { T* i = m_elements; return i; }

		void fill(T value) {
			for (int i = 0; i < m_size; i++) {
				m_elements[i] = value;
			}
		}
		void swap(array& other) {
			for (int i = 0; i < m_size; i++) {
				T temp = m_elements[i];
				m_elements[i] = other[i];
				other[i] = temp;
			}
		}

		bool empty() const {
			if (m_size == 0) {
				return true;
			}
			else {
				return false;
			}
		};
		size_t size() const { return m_size; }

	private:
		size_t m_size = Size;
		T m_elements[Size]{};
	};
}

